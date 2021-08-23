import React, { Component } from 'react';

export class Home extends Component {
  static displayName = Home.name;

    render() {

        var num1 = 8;
        var num2 = 7;

       var sum = num1 + num2;
      return (
       
      <div>
            The sum is <h1>{sum}</h1>
      </div>
    );
  }
}
