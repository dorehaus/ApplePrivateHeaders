/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSDrawables.framework/Versions/A/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <TSKit/TSKSelection.h>

@class TSDInfoCollectionSelectionHelper, NSSet, NSString;

@interface TSDDrawableSelection : TSKSelection {

	TSDInfoCollectionSelectionHelper* _selectionHelper;

}

@property (nonatomic,retain) TSDInfoCollectionSelectionHelper * selectionHelper;              //@synthesize selectionHelper=_selectionHelper - In the implementation block
@property (nonatomic,readonly) NSSet * infos; 
@property (nonatomic,readonly) unsigned long long infoCount; 
@property (nonatomic,readonly) char isEmpty; 
@property (nonatomic,readonly) NSSet * infosWithNonInteractiveInfos; 
@property (nonatomic,readonly) NSSet * nonInteractiveInfos; 
@property (nonatomic,readonly) NSSet * unlockedInfos; 
@property (nonatomic,readonly) unsigned long long unlockedInfoCount; 
@property (nonatomic,readonly) NSString * subclassDescription; 
+(Class)archivedSelectionClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(char)isEmpty;
-(NSString *)subclassDescription;
-(NSSet *)infos;
-(id)initWithInfos:(id)arg1 ;
-(char)containsKindOfClass:(Class)arg1 ;
-(char)containsUnlockedKindOfClass:(Class)arg1 ;
-(id)infosOfClass:(Class)arg1 ;
-(unsigned long long)infoCount;
-(NSSet *)unlockedInfos;
-(unsigned long long)unlockedInfoCount;
-(id)initWithArchive:(const DrawableSelectionArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveToArchive:(DrawableSelectionArchive*)arg1 archiver:(id)arg2 ;
-(id)UUIDDescription;
-(NSSet *)infosWithNonInteractiveInfos;
-(NSSet *)nonInteractiveInfos;
-(id)initWithInteractiveInfos:(id)arg1 nonInteractiveInfos:(id)arg2 ;
-(TSDInfoCollectionSelectionHelper *)selectionHelper;
-(void)setSelectionHelper:(TSDInfoCollectionSelectionHelper *)arg1 ;
@end

