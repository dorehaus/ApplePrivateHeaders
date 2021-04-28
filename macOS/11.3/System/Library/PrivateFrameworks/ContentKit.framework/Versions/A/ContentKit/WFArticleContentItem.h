/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/Versions/A/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class WFArticle;

@interface WFArticleContentItem : WFContentItem <WFContentItemClass>

@property (nonatomic,readonly) WFArticle * article; 
+(id)typeDescription;
+(id)propertyBuilders;
+(id)ownedTypes;
+(id)outputTypes;
+(id)contentCategories;
+(id)pluralTypeDescription;
+(id)countDescription;
+(id)defaultSourceForRepresentation:(id)arg1 ;
+(id)attributedStringWithHTML:(id)arg1 named:(id)arg2 ;
+(id)fileWithHTML:(id)arg1 named:(id)arg2 ;
+(char)supportedTypesMustBeDeterminedByInstance;
-(id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)generateObjectRepresentation:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3 ;
-(char)canGenerateRepresentationForType:(id)arg1 ;
-(char)getListSubtitle:(/*^block*/id)arg1 ;
-(WFArticle *)article;
@end

