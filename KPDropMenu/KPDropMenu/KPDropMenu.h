//
//  KPDropMenu.h
//  KPDropMenu
//
//  Created by Krishna Patel on 22/03/17.
//  Copyright © 2017 Krishna. All rights reserved.
//

#import <UIKit/UIKit.h>

@class KPDropMenu;

@protocol KPDropMenuDelegate

@optional
-(void)didSelectItem : (KPDropMenu *) dropMenu atIndex : (int) atIntedex;
-(void)didShow : (KPDropMenu *)dropMenu;
-(void)didHide : (KPDropMenu *)dropMenu;

@end

IB_DESIGNABLE

@interface KPDropMenu : UIView

@property (nonatomic, retain) id <KPDropMenuDelegate> delegate;

/*This will assign title of the Drop Menu.*/
@property (nonatomic, retain) IBInspectable NSString *title;

/*This will assign color of Drop Menu title. Default is Black Color */
@property (nonatomic, retain) IBInspectable UIColor *titleColor;

/* This will assign font size of Drop Menu title. Defualt is 14.0 */
@property (nonatomic) IBInspectable CGFloat titleFontSize;

/* This will assign height of each items in Drop Menu. Default is 40.0 */
@property (nonatomic) IBInspectable double itemHeight;

/* This will assign background color of item in Drop Menu. Default is white color. */
@property (nonatomic, retain) IBInspectable UIColor *itemBackground;

/* This will assign item color in Drop Menu. Default is Black Color. */
@property (nonatomic, retain) IBInspectable UIColor *itemTextColor;

/* This will assign font size of item in Drop Menu. Defualt is 14.0 */
@property (nonatomic) IBInspectable CGFloat itemFontSize;

/* This will assign direction of Drop Menu. Defualt is Down. Possible Values are YES/NO. YES(On) = Down and NO(Off) = Up */
@property (nonatomic) IBInspectable BOOL DirectionDown;

/* This will assign custom font to items in Drop Menu. Default is System Font. */
@property (nonatomic)  UIFont *itemsFont;

/* This will assign alignment of title text of Drop Menu. Default Value is Center*/
@property (nonatomic) NSTextAlignment titleTextAlignment;

/* This will assign alignment of item text of Drop Menu. Default Value is Center*/
@property (nonatomic) NSTextAlignment itemTextAlignment;

/* Array of items to be displayed in Drop Menu */
@property (nonatomic, retain) NSArray *items;

/* Optional : Array of numbers indicating IDs which is assigned to Drop Menu as tag */
@property (nonatomic, retain) NSArray *itemsIDs;

@end
