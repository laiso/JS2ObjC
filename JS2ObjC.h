//
//  JS2ObjC.h
//
//  Created by tarunon on 12/06/11.
//
//  Copyright (c) 2012 Nobuo Saito. All rights reserved.
//
//  Permission is hereby granted, free of charge, to any person obtaining
//  a copy of this software and associated documentation files (the 
//  "Software"), to deal in the Software without restriction, including
//  without limitation the rights to use, copy, modify, merge, publish,
//  distribute, sublicense, and/or sell copies of the Software, and to
//  permit persons to whom the Software is furnished to do so, subject to
//  the following conditions:
//
//  The above copyright notice and this permission notice shall be
//  included in all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
//  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
//  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
//  IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
//  CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
//  TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
//  SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//

//  I'm sure the behavior in iOS5.x.
//  Initialize an instance using 'standardJS2ObjC',
//  and connect JavaScript's function and Objective-C's function.
//  You must do before create an instance of UIWebView.
//  The Objective-C's functions return value must be NSString.
//  The Objective-C's functions argument is one NSArray including NSString(s)
//  that JavaScript's functions argument(s).

#import <Foundation/Foundation.h>

@interface JS2ObjC : NSObject

+ (JS2ObjC *)standardJS2ObjC;
- (void)addTarget:(id)target action:(SEL)sel withJSFunctionName:(NSString *)name;
- (void)removeJSFunctionName:(NSString *)name;
- (void)removeAllTargets;

@end

