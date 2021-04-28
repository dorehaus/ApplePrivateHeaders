/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/Versions/A/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NFApplet;

@interface NFDigitalCarKeyStartEvent : NSObject <NSSecureCoding> {

	NSString* _appletIdentifier;
	NFApplet* _applet;
	NSString* _keyIdentifier;
	NSString* _spIdentifier;

}

@property (nonatomic,readonly) NFApplet * applet;                     //@synthesize applet=_applet - In the implementation block
@property (nonatomic,readonly) NSString * keyIdentifier;              //@synthesize keyIdentifier=_keyIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * spIdentifier;               //@synthesize spIdentifier=_spIdentifier - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)keyIdentifier;
-(id)asDictionary;
-(NFApplet *)applet;
-(void)_setApplet:(id)arg1 ;
-(NSString *)spIdentifier;
-(id)initFromContactlessPaymentStartEvent:(id)arg1 ;
@end

