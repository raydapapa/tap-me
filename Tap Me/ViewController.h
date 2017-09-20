//
//  ViewController.h
//  Tap Me
//
//  Created by Papa Ray on 9/20/17.
//  Copyright © 2017 RTG. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {
    IBOutlet UILabel *scoreLabel;
    IBOutlet UILabel *timerLabel;
    
    NSInteger count;
    NSInteger seconds;
    NSTimer *timer;
}

- (IBAction)buttonPressed;

@end

