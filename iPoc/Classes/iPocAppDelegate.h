//
//  iPocAppDelegate.h
//  iPoc
//
//  Created by Chris McClimans on 7/7/10.
//  Copyright 2010 CodeCafe, LLC. All rights reserved.
//


#import <UIKit/UIKit.h>

@interface iPocAppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate> {
    UIWindow *window;

    UITabBarController *tabBarController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;


@property (nonatomic, retain) IBOutlet UITabBarController *tabBarController;

@end

