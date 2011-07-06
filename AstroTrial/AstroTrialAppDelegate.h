//
//  AstroTrialAppDelegate.h
//  AstroTrial
//
//  Created by Timothy Urness on 7/6/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AstroTrialViewController;

@interface AstroTrialAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet AstroTrialViewController *viewController;

@end
