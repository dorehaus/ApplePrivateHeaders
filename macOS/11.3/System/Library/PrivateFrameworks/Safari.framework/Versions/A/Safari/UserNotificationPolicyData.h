/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSImage, NSDate;

@interface UserNotificationPolicyData : NSObject <NSCopying> {

	NSString* _displayName;
	NSImage* _icon;
	int _policy;
	NSDate* _dateAdded;

}

@property (nonatomic,readonly) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSImage * icon;                      //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) int policy;                            //@synthesize policy=_policy - In the implementation block
@property (nonatomic,retain) NSDate * dateAdded;                    //@synthesize dateAdded=_dateAdded - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(NSImage *)icon;
-(int)policy;
-(void)setPolicy:(int)arg1 ;
-(NSDate *)dateAdded;
-(void)setDateAdded:(NSDate *)arg1 ;
-(id)initWithDisplayName:(id)arg1 icon:(id)arg2 policy:(int)arg3 ;
-(void)updatePermission:(int)arg1 ;
@end
