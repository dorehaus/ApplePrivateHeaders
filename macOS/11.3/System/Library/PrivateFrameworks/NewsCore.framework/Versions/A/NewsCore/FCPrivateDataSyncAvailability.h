/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCPrivateDataSyncAvailability.h>

@protocol FCPrivateDataSyncAvailability
@property (getter=isPrivateDataSyncingAllowed,nonatomic,readonly) char privateDataSyncingAllowed; 
@required
-(char)isPrivateDataSyncingAllowed;

@end


@class NSArray;

@interface FCPrivateDataSyncAvailability : NSObject <FCPrivateDataSyncAvailability> {

	NSArray* _conditions;

}

@property (nonatomic,copy,readonly) NSArray * conditions;                                                      //@synthesize conditions=_conditions - In the implementation block
@property (getter=isPrivateDataSyncingAllowed,nonatomic,readonly) char privateDataSyncingAllowed; 
+(id)defaultAvailability;
+(id)notAvailable;
-(NSArray *)conditions;
-(char)isPrivateDataSyncingAllowed;
-(id)initWithConditions:(id)arg1 ;
@end
