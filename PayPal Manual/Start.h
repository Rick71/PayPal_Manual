//
//  ViewController.h
//  PayPal Manual
//
//  Created by Ricardo Vera on 28/11/15.
//  Copyright © 2015 Comercomp. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PayPalMobile.h"


@interface Start : UIViewController<PayPalPaymentDelegate>

- (IBAction)btnPagar:(id)sender;

@end

