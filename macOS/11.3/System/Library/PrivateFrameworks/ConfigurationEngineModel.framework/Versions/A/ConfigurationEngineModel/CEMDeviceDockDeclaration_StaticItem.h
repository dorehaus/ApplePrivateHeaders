/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/Versions/A/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMDeviceDockDeclaration_StaticItemTileData, NSString;

@interface CEMDeviceDockDeclaration_StaticItem : CEMPayloadBase {

	CEMDeviceDockDeclaration_StaticItemTileData* _payloadTileData;
	NSString* _payloadTileType;

}

@property (nonatomic,copy) CEMDeviceDockDeclaration_StaticItemTileData * payloadTileData;              //@synthesize payloadTileData=_payloadTileData - In the implementation block
@property (nonatomic,copy) NSString * payloadTileType;                                                 //@synthesize payloadTileType=_payloadTileType - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithTileData:(id)arg1 withTileType:(id)arg2 ;
+(id)buildRequiredOnlyWithTileData:(id)arg1 withTileType:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadTileData:(CEMDeviceDockDeclaration_StaticItemTileData *)arg1 ;
-(void)setPayloadTileType:(NSString *)arg1 ;
-(CEMDeviceDockDeclaration_StaticItemTileData *)payloadTileData;
-(NSString *)payloadTileType;
@end

