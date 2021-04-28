/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCH3DLabelsMeshRenderer.h>

@class TSCH3DTextureAtlas, TSUNoCopyDictionary;

@interface TSCH3DLabelsAtlasMeshRenderer : TSCH3DLabelsMeshRenderer {

	TSCH3DTextureAtlas* _atlas;
	TSUNoCopyDictionary* _externalAttributeVariables;

}
-(id)init;
-(void)flushCache;
-(void)allocateDynamicResourcesIntoArray:(id)arg1 ;
-(void)beginResources:(id)arg1 samples:(float)arg2 ;
-(void)submitResourcesWithProcessor:(id)arg1 ;
-(void)renderWithMeshRenderLabelInfo:(id)arg1 ;
-(id)p_resourceAtIndex:(unsigned long long)arg1 childIndex:(unsigned long long)arg2 dimension:(unsigned long long)arg3 createIfAbsent:(char)arg4 ;
-(unsigned long long)p_indexForExternalAttribute:(id)arg1 ;
-(unsigned long long)p_resourceCount;
-(id)p_vertexResourceAtIndex:(unsigned long long)arg1 createIfAbsent:(char)arg2 ;
-(id)p_texcoordResourceAtIndex:(unsigned long long)arg1 createIfAbsent:(char)arg2 ;
-(void)p_submitExternalAttributesForIndex:(unsigned long long)arg1 processor:(id)arg2 ;
-(id)p_resourceForExternalLabelAttribute:(id)arg1 index:(unsigned long long)arg2 createIfAbsent:(char)arg3 ;
@end

