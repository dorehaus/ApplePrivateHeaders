/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/Versions/A/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface TVRCButton : NSObject <NSSecureCoding> {

	char _enabled;
	char _hasTapAction;
	long long _buttonType;
	NSDictionary* _properties;

}

@property (nonatomic,readonly) long long buttonType;                        //@synthesize buttonType=_buttonType - In the implementation block
@property (getter=isEnabled,nonatomic,readonly) char enabled;               //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) char hasTapAction;                           //@synthesize hasTapAction=_hasTapAction - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * properties;              //@synthesize properties=_properties - In the implementation block
+(char)supportsSecureCoding;
+(char)_isMediaButtonEvent:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)isEnabled;
-(void)_setEnabled:(char)arg1 ;
-(NSDictionary *)properties;
-(long long)buttonType;
-(id)_initWithButtonType:(long long)arg1 hasTapAction:(char)arg2 properties:(id)arg3 ;
-(char)isEqualToButton:(id)arg1 ;
-(id)_initWithButtonType:(long long)arg1 ;
-(char)hasTapAction;
@end

