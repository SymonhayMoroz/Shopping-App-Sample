//
//  AppDelegate.h
//  ShoppingCartExample
//
//  Created by Symonhay M on 5/22/15.
//  Copyright (c) 2015 Symonhay M. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) UITabBarController *tabBarController;
@property (nonatomic,strong) NSString *databasePath;

-(void) createAndCheckDatabase;
-(BOOL) addSkipBackupAttributeToItemAtURL;

-(void) setupTabBarItems;
-(void) updateCartTabBadge;

@end