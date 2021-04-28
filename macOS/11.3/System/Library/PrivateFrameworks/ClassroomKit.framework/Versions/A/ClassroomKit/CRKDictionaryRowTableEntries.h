/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRKTableEntries.h>

@class NSArray, NSString;

@interface CRKDictionaryRowTableEntries : NSObject <CRKTableEntries> {

	NSArray* mObjects;
	NSArray* mKeys;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)columnCount;
-(unsigned long long)rowCount;
-(id)entryAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2 ;
-(id)initWithDictionaryObjects:(id)arg1 keys:(id)arg2 ;
@end

