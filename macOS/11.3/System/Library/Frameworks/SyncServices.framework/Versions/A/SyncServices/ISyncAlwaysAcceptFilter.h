/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ISyncFiltering.h>

@class NSArray;

@interface ISyncAlwaysAcceptFilter : NSObject <ISyncFiltering> {

	NSArray* _entityNames;

}
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)supportedEntityNames;
-(char)shouldApplyRecord:(id)arg1 withRecordIdentifier:(id)arg2 ;
-(id)initWithEntityNames:(id)arg1 ;
@end

