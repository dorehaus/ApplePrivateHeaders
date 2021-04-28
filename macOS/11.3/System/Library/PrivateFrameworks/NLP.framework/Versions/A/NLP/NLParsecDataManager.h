/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NLP.framework/Versions/A/NLP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSData;

@interface NLParsecDataManager : NSObject {

	NSMutableArray* m_entries;

}

@property (nonatomic,readonly) NSData * serializableData; 
+(char)supportsDomain:(id)arg1 ;
+(void)enumerateEntriesForSerializedData:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(void)notifyStoredSerializedDataChanged;
+(unsigned short)maxNumberOfPOIsAllowed;
-(void)dealloc;
-(void)insertEntry:(id)arg1 ;
-(void)addEntry:(id)arg1 domain:(id)arg2 metaData:(id)arg3 ;
-(NSData *)serializableData;
-(id)getEntries;
@end

