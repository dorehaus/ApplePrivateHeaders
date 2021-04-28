/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSApplication.framework/Versions/A/TSApplication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSApplication/TSAPdfTaggerContext.h>

@class NSArray, TSWPStorage, TSWPSelection;

@interface TSAPdfTaggerTextColumnOwnerContext : TSAPdfTaggerContext {

	NSArray* _columns;
	TSWPStorage* _storage;
	TSWPSelection* _limitSelection;

}

@property (nonatomic,copy,readonly) NSArray * columns;                             //@synthesize columns=_columns - In the implementation block
@property (nonatomic,__weak,readonly) TSWPStorage * storage;                       //@synthesize storage=_storage - In the implementation block
@property (nonatomic,__weak,readonly) TSWPSelection * limitSelection;              //@synthesize limitSelection=_limitSelection - In the implementation block
-(TSWPStorage *)storage;
-(NSArray *)columns;
-(id)initWithStateOfTagger:(id)arg1 columns:(id)arg2 storage:(id)arg3 limitSelection:(id)arg4 ;
-(TSWPSelection *)limitSelection;
@end

