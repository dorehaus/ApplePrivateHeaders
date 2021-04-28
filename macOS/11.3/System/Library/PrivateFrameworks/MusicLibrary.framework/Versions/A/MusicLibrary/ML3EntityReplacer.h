/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Versions/A/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@class NSMutableArray, ML3DatabaseConnection, ML3MusicLibrary;

@interface ML3EntityReplacer : NSObject {

	CFDictionaryRef _propertyToIndexPair;
	NSMutableArray* _naturalStatements;
	ML3DatabaseConnection* _connection;
	ML3MusicLibrary* _library;

}

@property (getter=isOpen,nonatomic,readonly) char open; 
-(void)dealloc;
-(void)close;
-(char)isOpen;
-(char)perform;
-(void)clearBindings;
-(void)bindValue:(id)arg1 forProperty:(id)arg2 ;
-(id)initWithEntityClass:(Class)arg1 properties:(id)arg2 library:(id)arg3 ;
-(void)bindNullForProperty:(id)arg1 ;
-(void)bindInt:(int)arg1 forProperty:(id)arg2 ;
-(void)bindDouble:(double)arg1 forProperty:(id)arg2 ;
-(void)bindPersistentID:(long long)arg1 ;
@end

