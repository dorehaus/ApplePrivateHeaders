/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSDrawables.framework/Versions/A/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSString;

@interface TSDInfoCollectionSelectionHelper : NSObject {

	NSSet* _nonInteractiveInfos;
	NSSet* _modelInfos;

}

@property (nonatomic,readonly) NSSet * modelInfos;                                //@synthesize modelInfos=_modelInfos - In the implementation block
@property (nonatomic,readonly) NSSet * nonInteractiveInfos;                       //@synthesize nonInteractiveInfos=_nonInteractiveInfos - In the implementation block
@property (nonatomic,readonly) NSSet * infosWithNonInteractiveInfos; 
@property (nonatomic,readonly) NSString * description; 
@property (nonatomic,readonly) NSString * UUIDDescription; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(NSString *)UUIDDescription;
-(NSSet *)infosWithNonInteractiveInfos;
-(NSSet *)nonInteractiveInfos;
-(id)initWithInteractiveInfos:(id)arg1 nonInteractiveInfos:(id)arg2 ;
-(NSSet *)modelInfos;
-(id)initWithInteractiveInfos:(id)arg1 ;
@end

