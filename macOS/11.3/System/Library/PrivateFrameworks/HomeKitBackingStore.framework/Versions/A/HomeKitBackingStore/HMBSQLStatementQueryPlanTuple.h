/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/Versions/A/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HMBSQLStatementQueryPlanTuple : HMFObject {

	int _row;
	int _parent;
	NSString* _detail;

}

@property (nonatomic,readonly) int row;                        //@synthesize row=_row - In the implementation block
@property (nonatomic,readonly) int parent;                     //@synthesize parent=_parent - In the implementation block
@property (nonatomic,readonly) NSString * detail;              //@synthesize detail=_detail - In the implementation block
-(int)parent;
-(int)row;
-(NSString *)detail;
-(id)initWithRow:(id)arg1 ;
@end

