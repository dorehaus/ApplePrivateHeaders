/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigration.framework/Versions/A/SystemMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SystemMigration/SMDBEntry.h>

@class ODRecord;

@interface SMODDBEntry : SMDBEntry {

	ODRecord* _backingODRecord;

}

@property (retain) ODRecord * backingODRecord;              //@synthesize backingODRecord=_backingODRecord - In the implementation block
-(id)name;
-(id)initWithEntry:(id)arg1 ;
-(id)initWithODRecord:(id)arg1 ;
-(char)_createDictionaryFromRecord:(id)arg1 ;
-(void)setBackingODRecord:(ODRecord *)arg1 ;
-(id)initWithDictionary:(id)arg1 andName:(id)arg2 ;
-(ODRecord *)backingODRecord;
@end

