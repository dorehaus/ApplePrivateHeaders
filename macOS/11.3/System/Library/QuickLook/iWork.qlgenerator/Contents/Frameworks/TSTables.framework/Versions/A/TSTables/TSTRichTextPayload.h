/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPObject.h>
#import <TSTables/TSPCopying.h>

@class TSWPStorage;

@interface TSTRichTextPayload : TSPObject <TSPCopying> {

	TSWPStorage* _storage;

}

@property (nonatomic,retain) TSWPStorage * storage;              //@synthesize storage=_storage - In the implementation block
+(id)payloadWithStorage:(id)arg1 ;
-(id)string;
-(TSWPStorage *)storage;
-(void)setStorage:(TSWPStorage *)arg1 ;
-(id)initWithStorage:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(id)initWithContext:(id)arg1 storage:(id)arg2 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(char)tst_dataObjectIsEqual:(id)arg1 ;
-(unsigned long long)tst_dataObjectHash;
@end

