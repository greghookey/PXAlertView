//
//  PXAlertView.h
//  PXAlertViewDemo
//
//  Created by Alex Jarvis on 25/09/2013.
//  Copyright (c) 2013 Panaxiom Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PXAlertView : UIView

@property (nonatomic, getter = isVisible) BOOL visible;

+ (PXAlertView *)showAlertWithTitle:(NSString *)title
                          tintColor:(UIColor *)tintColor;

+ (PXAlertView *)showAlertWithTitle:(NSString *)title
                            message:(NSString *)message
                          tintColor:(UIColor *)tintColor;

+ (PXAlertView *)showAlertWithTitle:(NSString *)title
                            message:(NSString *)message
                          tintColor:(UIColor *)tintColor
                         completion:(void(^) (BOOL cancelled))completion;

+ (PXAlertView *)showAlertWithTitle:(NSString *)title
                            message:(NSString *)message
                        cancelTitle:(NSString *)cancelTitle
                            tintColor:(UIColor *)tintColor
                         completion:(void(^) (BOOL cancelled))completion;

+ (PXAlertView *)showAlertWithTitle:(NSString *)title
                            message:(NSString *)message
                        cancelTitle:(NSString *)cancelTitle
                         otherTitle:(NSString *)otherTitle
                          tintColor:(UIColor *)tintColor
                         completion:(void(^) (BOOL cancelled))completion;

+ (PXAlertView *)showAlertWithTitle:(NSString *)title
                            message:(NSString *)message
                        cancelTitle:(NSString *)cancelTitle
                         otherTitle:(NSString *)otherTitle
                          tintColor:(UIColor *)tintColor
                        contentView:(UIView *)view
                         completion:(void(^) (BOOL cancelled))completion;

@end
