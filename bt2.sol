// SPDX-License-Identifier: GPL-3.0

pragma solidity >=0.7.0 <0.9.0;

contract Bank {
    mapping(address => uint256) public balances;

    function deposit(uint256 _amount) public {
        balances[msg.sender] += _amount;
    }

    function withdraw(uint256 _amount) public {
        require(balances[msg.sender] > _amount, "Not enough ether");
        balances[msg.sender] -= _amount;
    }

    function getBal() public view returns (uint256) {
        return balances[msg.sender];
    }
}
