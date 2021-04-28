/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FCPersistentDictionary;

@interface FCAccountActionQueue : NSObject {

	FCPersistentDictionary* _persistentDictionary;

}

@property (nonatomic,retain) FCPersistentDictionary * persistentDictionary;              //@synthesize persistentDictionary=_persistentDictionary - In the implementation block
-(id)init;
-(id)initWithFileURL:(id)arg1 ;
-(FCPersistentDictionary *)persistentDictionary;
-(char)readLocalDataHint;
-(char)enqueueActionWithType:(long long)arg1 ;
-(id)peekAtActionTypes;
-(char)popActionTypesUpToCount:(unsigned long long)arg1 setLocalDataHintIfNeeded:(char)arg2 ;
-(void)setPersistentDictionary:(FCPersistentDictionary *)arg1 ;
@end

