# KPDropMenu
KPDropMenu is an Objective-C port of [HADropDown](https://github.com/Hassan-Aftab/HADropDown). It expands and collapses in two directions (up & down). It allows the user to select only one item at a time. One can customize font, color, item height, alignment, etc in code (as well as Interface Builder).


### Screenshot
![](https://github.com/KrishnaPatell/KPDropMenu/blob/master/KPDropMenu/demo.gif)

### Installation
Simply include KPDropMenu.h and KPDropMenu.m file into your project directory.


### Usage

#### 1. Through interface builder :
* Add UIView in interface builder and change its class from UIView to KPDropMenu
![](https://github.com/KrishnaPatell/KPDropMenu/blob/master/KPDropMenu/img_IdentityInspector.png)

* Customize Properties with the help of attribute inspector

![](https://github.com/KrishnaPatell/KPDropMenu/blob/master/KPDropMenu/img_AttributeInspector.png)

#### 2. Via code

```sh
KPDropMenu *dropNew = [[KPDropMenu alloc] initWithFrame:CGRectMake(8, 250, 150, 50)];
dropNew.delegate = self;
dropNew.items = @[@"Apple", @"Grapes", @"Cherry", @"Pineapple", @"Mango", @"Orange"];
dropNew.title = @"Select Again";
dropNew.itemsFont = [UIFont fontWithName:@"Helvetica-Regular" size:12.0];
dropNew.titleTextAlignment = NSTextAlignmentCenter;
dropNew.DirectionDown = NO;
[self.view addSubview:dropNew];
```
