/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/Versions/A/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IconServices/IconServices-Structs.h>
#import <libobjc.A.dylib/ISIconsetVariant.h>

@class NSDictionary, ISIconset, NSString, NSMutableDictionary;

@interface ISVariant : NSObject <ISIconsetVariant> {

	unsigned _type;
	int _sizeSet;
	NSDictionary* _assetCatalogReference;
	ISIconset* _iconset;
	NSString* _name;
	NSMutableDictionary* _resources;
	ISVariant* _selectedVariant;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSDictionary * assetCatalogReference;              //@synthesize assetCatalogReference=_assetCatalogReference - In the implementation block
@property (assign) unsigned type;                                     //@synthesize type=_type - In the implementation block
@property (__weak,readonly) ISIconset * iconset;                      //@synthesize iconset=_iconset - In the implementation block
@property (readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (readonly) NSMutableDictionary * resources;                 //@synthesize resources=_resources - In the implementation block
@property (retain) ISVariant * selectedVariant;                       //@synthesize selectedVariant=_selectedVariant - In the implementation block
@property (assign) int sizeSet;                                       //@synthesize sizeSet=_sizeSet - In the implementation block
+(id)resourceTypes;
-(NSDictionary *)assetCatalogReference;
-(id)initWithType:(unsigned)arg1 sizeSet:(int)arg2 ;
-(char)addResourceWithURL:(id)arg1 resourceInfo:(id)arg2 ;
-(CGImageRef)imageForSize:(unsigned long long)arg1 scale:(unsigned long long)arg2 errors:(id*)arg3 ;
-(id)icnsWithFlags:(long long)arg1 ;
-(id)initWithName:(id)arg1 iconset:(id)arg2 ;
-(void)setAssetCatalogReference:(NSDictionary *)arg1 ;
-(ISIconset *)iconset;
-(int)sizeSet;
-(void)setSizeSet:(int)arg1 ;
-(NSString *)description;
-(NSString *)name;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(NSMutableDictionary *)resources;
-(ISVariant *)selectedVariant;
-(void)setSelectedVariant:(ISVariant *)arg1 ;
-(id)imageWithSize:(CGSize)arg1 scale:(unsigned)arg2 ;
@end

