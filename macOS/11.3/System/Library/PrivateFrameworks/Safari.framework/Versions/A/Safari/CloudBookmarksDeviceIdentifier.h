/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CloudBookmarksDeviceIdentifier : NSObject {

	NSString* _salt;
	NSString* _stringValue;

}

@property (nonatomic,copy,readonly) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
+(id)standardIdentifier;
+(void)resetStandardIdentifier;
+(id)_storedSaltCreatingIfNeeded;
+(void)_resetStoredSalt;
-(id)init;
-(NSString *)stringValue;
-(void)_reset;
-(id)initWithSalt:(id)arg1 ;
@end

