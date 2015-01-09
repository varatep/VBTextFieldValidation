//
//  VBTextFieldValidation.h
//  VBTextFieldValidation
//
//  Created by Varatep Buranintu on 1/4/15.
//  Copyright (c) 2015 Varatep Buranintu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface VBTextFieldValidation : UITextField

- (BOOL)validatePhone;
- (BOOL)validateDate;
- (BOOL)validateTime;
- (BOOL)validate;


@end
