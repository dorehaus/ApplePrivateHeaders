/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/Versions/A/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DifferentialPrivacy/_DPDataRecorder.h>

@class _DPStorage, NSSet;

@interface _DPDatabaseRecorder : _DPDataRecorder {

	_DPStorage* _db;
	NSSet* _blacklistSet;
	unsigned long long _puzzlePieceCount;

}

@property (nonatomic,readonly) _DPStorage * db;                                  //@synthesize db=_db - In the implementation block
@property (nonatomic,readonly) NSSet * blacklistSet;                             //@synthesize blacklistSet=_blacklistSet - In the implementation block
@property (nonatomic,readonly) unsigned long long puzzlePieceCount;              //@synthesize puzzlePieceCount=_puzzlePieceCount - In the implementation block
-(id)description;
-(id)init;
-(_DPStorage *)db;
-(void)recordNumbers:(id)arg1 ;
-(void)recordStrings:(id)arg1 ;
-(void)recordStrings:(id)arg1 metadata:(id)arg2 ;
-(void)recordWords:(id)arg1 ;
-(void)recordBitValues:(id)arg1 ;
-(void)recordBitValues:(id)arg1 metadata:(id)arg2 ;
-(void)recordBitVectors:(id)arg1 metadata:(id)arg2 ;
-(id)initWithKey:(id)arg1 storage:(id)arg2 ;
-(id)initWithKey:(id)arg1 storage:(id)arg2 systemBlacklistPath:(id)arg3 runtimeBlacklistPath:(id)arg4 ;
-(char)isMetadataValid:(id)arg1 ;
-(NSSet *)blacklistSet;
-(unsigned long long)puzzlePieceCount;
@end

