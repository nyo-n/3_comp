//
//  ViewController.h
//  sumple2
//
//  Created by CA on 13/08/20.
//  Copyright (c) 2013年 CA. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UIImageView *result;
- (IBAction)TapBtn:(id)sender;
- (UIImage*)grayscale: (UIImage*)anImage andgrayscale2:(UIImage*)anImage2 andgrayscale3:(UIImage*)anImage3;
@property (weak, nonatomic) IBOutlet UIImageView *resultImage;
@property (weak, nonatomic) IBOutlet UILabel *SAD_result;
- (IBAction)SAD_calculate:(id)sender;

@property (weak, nonatomic) IBOutlet UILabel *ZNCC_result;
- (IBAction)ZNCC_calculate:(id)sender;


@end
