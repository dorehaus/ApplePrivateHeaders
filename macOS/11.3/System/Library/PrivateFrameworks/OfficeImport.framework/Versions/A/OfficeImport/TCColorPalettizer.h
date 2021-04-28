/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface TCColorPalettizer : NSObject {

	tagOctree* m_pTree;
	BOOL isDefaultPaletteSize;

}
-(void)dealloc;
-(int)createOctree:(tagOctree*)arg1 maxPaletteSize:(unsigned short)arg2 ;
-(int)deleteOctree:(tagOctree*)arg1 ;
-(BOOL)addQuadColor:(tagRgbQuad)arg1 ;
-(int)addPixelToOctree:(tagOctree*)arg1 pixel:(tagRgbQuad)arg2 ;
-(int)reduceOctree:(tagOctree*)arg1 ;
-(unsigned short)getPaletteFromOctree:(tagOctreeNode*)arg1 paletteEntry:(tagRgbQuad*)arg2 index:(unsigned short)arg3 ;
-(int)paletteIndexFromQuadColor:(tagRgbQuad)arg1 ;
-(int)rgbToIndexOctree:(tagOctree*)arg1 source:(tagRgbQuad)arg2 destination:(char*)arg3 ;
-(id)initWitMaxPaletteSize:(unsigned)arg1 ;
-(id)initWitDefaultPaletteSize;
-(BOOL)addTSUColor:(id)arg1 ;
-(void)createPalette;
-(unsigned)paletteColorCount;
-(id)getPaletteDataRaw;
-(id)getPngPaletteData;
-(id)getPaletteData;
-(int)paletteIndexFromTSUColor:(id)arg1 ;
-(int)createNodeOctree:(tagOctreeNode*)arg1 parent:(tagOctreeNode*)arg2 ;
-(int)deleteNodeOctree:(tagOctreeNode*)arg1 ;
-(int)deleteListOctree:(tagLevelItem*)arg1 ;
@end

