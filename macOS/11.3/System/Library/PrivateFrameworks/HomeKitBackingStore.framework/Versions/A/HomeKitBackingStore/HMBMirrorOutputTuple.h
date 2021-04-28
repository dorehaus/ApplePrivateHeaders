/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/Versions/A/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMBModel, NSData, HMBLocalSQLQueryTable;

@interface HMBMirrorOutputTuple : HMFObject {

	HMBModel* _model;
	NSData* _externalID;
	NSData* _externalData;
	HMBLocalSQLQueryTable* _queryTable;
	unsigned long long _recordRow;
	unsigned long long _outputBlockRow;

}

@property (readonly) unsigned long long recordRow;                              //@synthesize recordRow=_recordRow - In the implementation block
@property (readonly) unsigned long long outputBlockRow;                         //@synthesize outputBlockRow=_outputBlockRow - In the implementation block
@property (nonatomic,readonly) HMBModel * model;                                //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSData * externalID;                                 //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,copy) NSData * externalData;                               //@synthesize externalData=_externalData - In the implementation block
@property (nonatomic,readonly) HMBLocalSQLQueryTable * queryTable;              //@synthesize queryTable=_queryTable - In the implementation block
-(HMBModel *)model;
-(NSData *)externalID;
-(void)setExternalID:(NSData *)arg1 ;
-(NSData *)externalData;
-(void)setExternalData:(NSData *)arg1 ;
-(id)attributeDescriptions;
-(unsigned long long)outputBlockRow;
-(unsigned long long)recordRow;
-(HMBLocalSQLQueryTable *)queryTable;
-(id)initWithOutputBlockRow:(unsigned long long)arg1 recordRow:(unsigned long long)arg2 model:(id)arg3 queryTable:(id)arg4 externalID:(id)arg5 externalData:(id)arg6 ;
@end

