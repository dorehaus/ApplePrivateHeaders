/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Network.framework/Versions/A/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NWL2Report : NSObject {

	char _cellularKnownGood;
	unsigned char _cellularRadioTechnology;
	unsigned char _cellularBand;
	char _wifiKnownGood;
	unsigned char _wifiRadioTechnology;
	int _cellularLQM;
	int _cellularMNC;
	int _cellularMCC;
	int _cellularUARFCN;
	int _cellularPID;
	int _cellularBandInfo;
	int _cellularBandwidth;
	int _cellularTAC;
	int _cellularBars;
	unsigned _cellularMode;
	int _wifiLQM;
	int _wifiRSSI;
	NSString* _cellularCellType;

}

@property (assign,nonatomic) int cellularLQM;                                    //@synthesize cellularLQM=_cellularLQM - In the implementation block
@property (assign,nonatomic) char cellularKnownGood;                             //@synthesize cellularKnownGood=_cellularKnownGood - In the implementation block
@property (assign,nonatomic) unsigned char cellularRadioTechnology;              //@synthesize cellularRadioTechnology=_cellularRadioTechnology - In the implementation block
@property (assign,nonatomic) int cellularMNC;                                    //@synthesize cellularMNC=_cellularMNC - In the implementation block
@property (assign,nonatomic) int cellularMCC;                                    //@synthesize cellularMCC=_cellularMCC - In the implementation block
@property (assign,nonatomic) int cellularUARFCN;                                 //@synthesize cellularUARFCN=_cellularUARFCN - In the implementation block
@property (assign,nonatomic) int cellularPID;                                    //@synthesize cellularPID=_cellularPID - In the implementation block
@property (assign,nonatomic) int cellularBandInfo;                               //@synthesize cellularBandInfo=_cellularBandInfo - In the implementation block
@property (nonatomic,retain) NSString * cellularCellType;                        //@synthesize cellularCellType=_cellularCellType - In the implementation block
@property (assign,nonatomic) int cellularBandwidth;                              //@synthesize cellularBandwidth=_cellularBandwidth - In the implementation block
@property (assign,nonatomic) int cellularTAC;                                    //@synthesize cellularTAC=_cellularTAC - In the implementation block
@property (assign,nonatomic) int cellularBars;                                   //@synthesize cellularBars=_cellularBars - In the implementation block
@property (assign,nonatomic) unsigned char cellularBand;                         //@synthesize cellularBand=_cellularBand - In the implementation block
@property (assign,nonatomic) unsigned cellularMode;                              //@synthesize cellularMode=_cellularMode - In the implementation block
@property (assign,nonatomic) int wifiLQM;                                        //@synthesize wifiLQM=_wifiLQM - In the implementation block
@property (assign,nonatomic) int wifiRSSI;                                       //@synthesize wifiRSSI=_wifiRSSI - In the implementation block
@property (assign,nonatomic) char wifiKnownGood;                                 //@synthesize wifiKnownGood=_wifiKnownGood - In the implementation block
@property (assign,nonatomic) unsigned char wifiRadioTechnology;                  //@synthesize wifiRadioTechnology=_wifiRadioTechnology - In the implementation block
-(id)createAWDReport;
-(int)cellularUARFCN;
-(int)cellularPID;
-(int)cellularTAC;
-(id)description;
-(unsigned)cellularMode;
-(void)setCellularMode:(unsigned)arg1 ;
-(void)setCellularCellType:(NSString *)arg1 ;
-(void)setCellularKnownGood:(char)arg1 ;
-(unsigned char)cellularRadioTechnology;
-(void)setCellularRadioTechnology:(unsigned char)arg1 ;
-(void)setWifiKnownGood:(char)arg1 ;
-(unsigned char)wifiRadioTechnology;
-(void)setWifiRadioTechnology:(unsigned char)arg1 ;
-(void)setCellularBandInfo:(int)arg1 ;
-(void)setCellularBandwidth:(int)arg1 ;
-(void)setCellularBars:(int)arg1 ;
-(unsigned char)cellularBand;
-(void)setCellularBand:(unsigned char)arg1 ;
-(char)cellularKnownGood;
-(char)wifiKnownGood;
-(int)cellularBandInfo;
-(NSString *)cellularCellType;
-(int)cellularBandwidth;
-(int)cellularBars;
-(void)setWifiRSSI:(int)arg1 ;
-(int)wifiRSSI;
-(void)setCellularLQM:(int)arg1 ;
-(void)setCellularMCC:(int)arg1 ;
-(void)setCellularMNC:(int)arg1 ;
-(void)setCellularPID:(int)arg1 ;
-(void)setCellularTAC:(int)arg1 ;
-(void)setCellularUARFCN:(int)arg1 ;
-(void)setWifiLQM:(int)arg1 ;
-(int)wifiLQM;
-(int)cellularLQM;
-(int)cellularMCC;
-(int)cellularMNC;
@end
