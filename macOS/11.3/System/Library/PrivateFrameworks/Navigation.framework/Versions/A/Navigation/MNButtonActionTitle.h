/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MNButtonActionTitle : NSObject <NSSecureCoding> {

	unsigned long long _action;
	NSString* _title;
	int _buttonDisplay;

}

@property (nonatomic,readonly) unsigned long long action;              //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) int buttonDisplay;                      //@synthesize buttonDisplay=_buttonDisplay - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)action;
-(NSString *)title;
-(int)buttonDisplay;
-(id)initWithAction:(unsigned long long)arg1 withTitle:(id)arg2 buttonDisplay:(int)arg3 ;
@end
