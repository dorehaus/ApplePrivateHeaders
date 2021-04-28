/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/OSAKit.framework/Versions/A/OSAKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OSADictionary, NSMutableDictionary, NSArrayController, OSADictionaryHistory;

@interface OSADictionaryControllerPrivate : NSObject {

	OSADictionary* _dictionary;
	NSMutableDictionary* _dataSource;
	NSArrayController* _definitionsController;
	OSADictionaryHistory* _dictionaryHistory;
	char _selectingObjects;

}
-(void)dealloc;
-(id)init;
-(void)setDictionary:(id)arg1 ;
-(id)dictionary;
-(id)dataSource;
-(void)setDataSource:(id)arg1 ;
-(id)definitionsController;
-(void)setDefinitionsController:(id)arg1 ;
-(void)setDictionaryHistory:(id)arg1 ;
-(id)dictionaryHistory;
-(char)selectingObjects;
-(void)setSelectingObjects:(char)arg1 ;
@end

