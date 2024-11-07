> How many catch blocks can follow a try block?

There is no limit to the number of catch blocks which can follow a try block, we can have multiple catch blocks to deal with errors of different data types. The catch blocks will be evaluated from top to bottom and the first one matching the given error will be executed.

> What is the need of generalized catch statement? How and where should it be placed?

A generalized catch statement is used to catch an error whose data type we do not know. It can catch an error with any data type.

A generalized catch statement is written as follows:

```
    try(){
        // statements that may throw error
    }
    catch(...){
        cout << "Error caught";
    }
```

The generalized catch block should be placed below all other catch blocks, since it will be executed for any given error. If we have other catch blocks for specific data types, they should be placed above the generalized catch block otherwise they will never be executed.