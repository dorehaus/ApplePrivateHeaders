/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/Versions/A/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface RTEventAgentHelper : NSObject {

	NSString* _restorationIdentifier;

}

@property (nonatomic,retain) NSString * restorationIdentifier;              //@synthesize restorationIdentifier=_restorationIdentifier - In the implementation block
+(char)launchdManaged;
+(id)signingIdentifierFromSelf;
-(void)setRestorationIdentifier:(NSString *)arg1 ;
-(NSString *)restorationIdentifier;
-(id)initWithRestorationIdentifier:(id)arg1 ;
@end
