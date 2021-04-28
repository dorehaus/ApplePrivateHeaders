/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Network.framework/Versions/A/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NWAWDNWL2Report : PBCodable <NSCopying> {

	int _cellularBand;
	int _cellularBandInfo;
	int _cellularBandwidth;
	int _cellularBars;
	NSString* _cellularCellType;
	int _cellularLqm;
	int _cellularMcc;
	int _cellularMnc;
	int _cellularMode;
	int _cellularPid;
	int _cellularPowerCostDownload;
	int _cellularPowerCostUpload;
	int _cellularRadioTechnology;
	int _cellularTac;
	int _cellularUarfcn;
	int _wifiLqm;
	int _wifiRadioTechnology;
	int _wifiRssi;
	char _cellularKnownGood;
	char _wifiKnownGood;
	SCD_Struct_NW23 _has;

}

@property (assign,nonatomic) char hasCellularLqm; 
@property (assign,nonatomic) int cellularLqm;                                //@synthesize cellularLqm=_cellularLqm - In the implementation block
@property (assign,nonatomic) char hasCellularPowerCostDownload; 
@property (assign,nonatomic) int cellularPowerCostDownload;                  //@synthesize cellularPowerCostDownload=_cellularPowerCostDownload - In the implementation block
@property (assign,nonatomic) char hasCellularPowerCostUpload; 
@property (assign,nonatomic) int cellularPowerCostUpload;                    //@synthesize cellularPowerCostUpload=_cellularPowerCostUpload - In the implementation block
@property (assign,nonatomic) char hasCellularKnownGood; 
@property (assign,nonatomic) char cellularKnownGood;                         //@synthesize cellularKnownGood=_cellularKnownGood - In the implementation block
@property (assign,nonatomic) char hasCellularRadioTechnology; 
@property (assign,nonatomic) int cellularRadioTechnology;                    //@synthesize cellularRadioTechnology=_cellularRadioTechnology - In the implementation block
@property (assign,nonatomic) char hasWifiLqm; 
@property (assign,nonatomic) int wifiLqm;                                    //@synthesize wifiLqm=_wifiLqm - In the implementation block
@property (assign,nonatomic) char hasWifiRssi; 
@property (assign,nonatomic) int wifiRssi;                                   //@synthesize wifiRssi=_wifiRssi - In the implementation block
@property (assign,nonatomic) char hasWifiKnownGood; 
@property (assign,nonatomic) char wifiKnownGood;                             //@synthesize wifiKnownGood=_wifiKnownGood - In the implementation block
@property (assign,nonatomic) char hasWifiRadioTechnology; 
@property (assign,nonatomic) int wifiRadioTechnology;                        //@synthesize wifiRadioTechnology=_wifiRadioTechnology - In the implementation block
@property (assign,nonatomic) char hasCellularMnc; 
@property (assign,nonatomic) int cellularMnc;                                //@synthesize cellularMnc=_cellularMnc - In the implementation block
@property (assign,nonatomic) char hasCellularMcc; 
@property (assign,nonatomic) int cellularMcc;                                //@synthesize cellularMcc=_cellularMcc - In the implementation block
@property (assign,nonatomic) char hasCellularUarfcn; 
@property (assign,nonatomic) int cellularUarfcn;                             //@synthesize cellularUarfcn=_cellularUarfcn - In the implementation block
@property (assign,nonatomic) char hasCellularPid; 
@property (assign,nonatomic) int cellularPid;                                //@synthesize cellularPid=_cellularPid - In the implementation block
@property (assign,nonatomic) char hasCellularBandInfo; 
@property (assign,nonatomic) int cellularBandInfo;                           //@synthesize cellularBandInfo=_cellularBandInfo - In the implementation block
@property (nonatomic,readonly) char hasCellularCellType; 
@property (nonatomic,retain) NSString * cellularCellType;                    //@synthesize cellularCellType=_cellularCellType - In the implementation block
@property (assign,nonatomic) char hasCellularBandwidth; 
@property (assign,nonatomic) int cellularBandwidth;                          //@synthesize cellularBandwidth=_cellularBandwidth - In the implementation block
@property (assign,nonatomic) char hasCellularTac; 
@property (assign,nonatomic) int cellularTac;                                //@synthesize cellularTac=_cellularTac - In the implementation block
@property (assign,nonatomic) char hasCellularBars; 
@property (assign,nonatomic) int cellularBars;                               //@synthesize cellularBars=_cellularBars - In the implementation block
@property (assign,nonatomic) char hasCellularBand; 
@property (assign,nonatomic) int cellularBand;                               //@synthesize cellularBand=_cellularBand - In the implementation block
@property (assign,nonatomic) char hasCellularMode; 
@property (assign,nonatomic) int cellularMode;                               //@synthesize cellularMode=_cellularMode - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)cellularMode;
-(void)setCellularMode:(int)arg1 ;
-(void)setHasCellularMode:(char)arg1 ;
-(char)hasCellularMode;
-(id)cellularModeAsString:(int)arg1 ;
-(int)StringAsCellularMode:(id)arg1 ;
-(void)setCellularCellType:(NSString *)arg1 ;
-(void)setCellularLqm:(int)arg1 ;
-(void)setHasCellularLqm:(char)arg1 ;
-(char)hasCellularLqm;
-(int)cellularPowerCostDownload;
-(void)setCellularPowerCostDownload:(int)arg1 ;
-(void)setHasCellularPowerCostDownload:(char)arg1 ;
-(char)hasCellularPowerCostDownload;
-(id)cellularPowerCostDownloadAsString:(int)arg1 ;
-(int)StringAsCellularPowerCostDownload:(id)arg1 ;
-(int)cellularPowerCostUpload;
-(void)setCellularPowerCostUpload:(int)arg1 ;
-(void)setHasCellularPowerCostUpload:(char)arg1 ;
-(char)hasCellularPowerCostUpload;
-(id)cellularPowerCostUploadAsString:(int)arg1 ;
-(int)StringAsCellularPowerCostUpload:(id)arg1 ;
-(void)setCellularKnownGood:(char)arg1 ;
-(void)setHasCellularKnownGood:(char)arg1 ;
-(char)hasCellularKnownGood;
-(int)cellularRadioTechnology;
-(void)setCellularRadioTechnology:(int)arg1 ;
-(void)setHasCellularRadioTechnology:(char)arg1 ;
-(char)hasCellularRadioTechnology;
-(id)cellularRadioTechnologyAsString:(int)arg1 ;
-(int)StringAsCellularRadioTechnology:(id)arg1 ;
-(void)setWifiLqm:(int)arg1 ;
-(void)setHasWifiLqm:(char)arg1 ;
-(char)hasWifiLqm;
-(void)setWifiRssi:(int)arg1 ;
-(void)setHasWifiRssi:(char)arg1 ;
-(char)hasWifiRssi;
-(void)setWifiKnownGood:(char)arg1 ;
-(void)setHasWifiKnownGood:(char)arg1 ;
-(char)hasWifiKnownGood;
-(int)wifiRadioTechnology;
-(void)setWifiRadioTechnology:(int)arg1 ;
-(void)setHasWifiRadioTechnology:(char)arg1 ;
-(char)hasWifiRadioTechnology;
-(id)wifiRadioTechnologyAsString:(int)arg1 ;
-(int)StringAsWifiRadioTechnology:(id)arg1 ;
-(void)setCellularMnc:(int)arg1 ;
-(void)setHasCellularMnc:(char)arg1 ;
-(char)hasCellularMnc;
-(void)setCellularMcc:(int)arg1 ;
-(void)setHasCellularMcc:(char)arg1 ;
-(char)hasCellularMcc;
-(void)setCellularUarfcn:(int)arg1 ;
-(void)setHasCellularUarfcn:(char)arg1 ;
-(char)hasCellularUarfcn;
-(void)setCellularPid:(int)arg1 ;
-(void)setHasCellularPid:(char)arg1 ;
-(char)hasCellularPid;
-(void)setCellularBandInfo:(int)arg1 ;
-(void)setHasCellularBandInfo:(char)arg1 ;
-(char)hasCellularBandInfo;
-(char)hasCellularCellType;
-(void)setCellularBandwidth:(int)arg1 ;
-(void)setHasCellularBandwidth:(char)arg1 ;
-(char)hasCellularBandwidth;
-(void)setCellularTac:(int)arg1 ;
-(void)setHasCellularTac:(char)arg1 ;
-(char)hasCellularTac;
-(void)setCellularBars:(int)arg1 ;
-(void)setHasCellularBars:(char)arg1 ;
-(char)hasCellularBars;
-(int)cellularBand;
-(void)setCellularBand:(int)arg1 ;
-(void)setHasCellularBand:(char)arg1 ;
-(char)hasCellularBand;
-(id)cellularBandAsString:(int)arg1 ;
-(int)StringAsCellularBand:(id)arg1 ;
-(int)cellularLqm;
-(char)cellularKnownGood;
-(int)wifiLqm;
-(int)wifiRssi;
-(char)wifiKnownGood;
-(int)cellularMnc;
-(int)cellularMcc;
-(int)cellularUarfcn;
-(int)cellularPid;
-(int)cellularBandInfo;
-(NSString *)cellularCellType;
-(int)cellularBandwidth;
-(int)cellularTac;
-(int)cellularBars;
@end
