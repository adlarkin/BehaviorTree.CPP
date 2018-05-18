/* Copyright (C) 2015-2017 Michele Colledanchise - All Rights Reserved
*
*   Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"),
*   to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense,
*   and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
*   The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
*
*   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
*   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
*   WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#include "condition_test_node.h"
#include <string>

BT::ConditionTestNode::ConditionTestNode(std::string name) : ConditionNode::ConditionNode(name)
{
    boolean_value_ = true;
}

BT::ConditionTestNode::~ConditionTestNode()
{
}

BT::NodeStatus BT::ConditionTestNode::tick()
{
    // Condition checking and state update

    if (boolean_value_)
    {
        setStatus(NodeStatus::SUCCESS);
        return NodeStatus::SUCCESS;
    }
    else
    {
        setStatus(NodeStatus::FAILURE);
        return NodeStatus::FAILURE;
    }
}

void BT::ConditionTestNode::set_boolean_value(bool boolean_value)
{
    boolean_value_ = boolean_value;
}
