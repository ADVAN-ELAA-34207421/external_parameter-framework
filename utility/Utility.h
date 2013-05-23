/*
 * INTEL CONFIDENTIAL
 * Copyright © 2011 Intel
 * Corporation All Rights Reserved.
 *
 * The source code contained or described herein and all documents related to
 * the source code ("Material") are owned by Intel Corporation or its suppliers
 * or licensors. Title to the Material remains with Intel Corporation or its
 * suppliers and licensors. The Material contains trade secrets and proprietary
 * and confidential information of Intel or its suppliers and licensors. The
 * Material is protected by worldwide copyright and trade secret laws and
 * treaty provisions. No part of the Material may be used, copied, reproduced,
 * modified, published, uploaded, posted, transmitted, distributed, or
 * disclosed in any way without Intel’s prior express written permission.
 *
 * No license under any patent, copyright, trade secret or other intellectual
 * property right is granted to or conferred upon you by disclosure or delivery
 * of the Materials, either expressly, by implication, inducement, estoppel or
 * otherwise. Any license under such intellectual property rights must be
 * express and approved by Intel in writing.
 *
 * CREATED: 2012-12-17
 */

#ifndef UTILITY_H
#define UTILITY_H

#include <string>
#include <list>
#include <map>

class CUtility
{
public:
    /**
    * Format the items of a map into a string as a list of key-value pairs. The map must be
    * composed of pairs of strings.
    *
    * @param[in] mapStr A map of strings
    * @param[out] strOutput The output string
    * @param[in] separator The separator to use between each item
    */
    static void asString(const std::list<std::string>& lstr,
                         std::string& strOutput,
                         const std::string& separator = "\n");

    /**
     * Format the items of a map into a string as a list of key-value pairs. The map must be
     * composed of pairs of strings.
     *
     * @param[in] mapStr A map of strings
     * @param[out] strOutput The output string
     * @param[in] strItemSeparator The separator to use between each item (key-value pair)
     * @param[in] strKeyValueSeparator The separator to use between key and value
     */
    static void asString(const std::map<std::string, std::string>& mapStr,
                         std::string& strOutput,
                         const std::string& strItemSeparator = ", ",
                         const std::string& strKeyValueSeparator = ":");
};

#endif // UTILITY_H
