/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/Versions/A/Libraries/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDLibnetcoreMbufStatsReport, AWDLibnetcoreMPTCPStatsReport, AWDLibnetcoreNetworkdStatsReport, AWDNWAPIUsage, NSMutableArray, AWDLibnetcoreTCPECNStatsReport, AWDLibnetcoreTCPStatsReport, AWDLibnetcoreTCPTFOStatsReport;

@interface AWDLibnetcoreStatsReport : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	AWDLibnetcoreMbufStatsReport* _mbufStatisticsReport;
	AWDLibnetcoreMPTCPStatsReport* _mptcpStatisticsReport;
	AWDLibnetcoreNetworkdStatsReport* _networkdStatisticsReport;
	AWDNWAPIUsage* _nwAPIUsageReport;
	unsigned _reportReason;
	NSMutableArray* _tcpECNInterfaceReports;
	AWDLibnetcoreTCPECNStatsReport* _tcpECNStatisticsReport;
	AWDLibnetcoreTCPStatsReport* _tcpStatisticsReport;
	AWDLibnetcoreTCPTFOStatsReport* _tcpTFOStatisticsReport;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasReportReason; 
@property (assign,nonatomic) unsigned reportReason;                                                    //@synthesize reportReason=_reportReason - In the implementation block
@property (nonatomic,readonly) char hasMbufStatisticsReport; 
@property (nonatomic,retain) AWDLibnetcoreMbufStatsReport * mbufStatisticsReport;                      //@synthesize mbufStatisticsReport=_mbufStatisticsReport - In the implementation block
@property (nonatomic,readonly) char hasTcpStatisticsReport; 
@property (nonatomic,retain) AWDLibnetcoreTCPStatsReport * tcpStatisticsReport;                        //@synthesize tcpStatisticsReport=_tcpStatisticsReport - In the implementation block
@property (nonatomic,readonly) char hasTcpECNStatisticsReport; 
@property (nonatomic,retain) AWDLibnetcoreTCPECNStatsReport * tcpECNStatisticsReport;                  //@synthesize tcpECNStatisticsReport=_tcpECNStatisticsReport - In the implementation block
@property (nonatomic,readonly) char hasTcpTFOStatisticsReport; 
@property (nonatomic,retain) AWDLibnetcoreTCPTFOStatsReport * tcpTFOStatisticsReport;                  //@synthesize tcpTFOStatisticsReport=_tcpTFOStatisticsReport - In the implementation block
@property (nonatomic,readonly) char hasNetworkdStatisticsReport; 
@property (nonatomic,retain) AWDLibnetcoreNetworkdStatsReport * networkdStatisticsReport;              //@synthesize networkdStatisticsReport=_networkdStatisticsReport - In the implementation block
@property (nonatomic,retain) NSMutableArray * tcpECNInterfaceReports;                                  //@synthesize tcpECNInterfaceReports=_tcpECNInterfaceReports - In the implementation block
@property (nonatomic,readonly) char hasNwAPIUsageReport; 
@property (nonatomic,retain) AWDNWAPIUsage * nwAPIUsageReport;                                         //@synthesize nwAPIUsageReport=_nwAPIUsageReport - In the implementation block
@property (nonatomic,readonly) char hasMptcpStatisticsReport; 
@property (nonatomic,retain) AWDLibnetcoreMPTCPStatsReport * mptcpStatisticsReport;                    //@synthesize mptcpStatisticsReport=_mptcpStatisticsReport - In the implementation block
+(Class)tcpECNInterfaceReportType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setMbufStatisticsReport:(AWDLibnetcoreMbufStatsReport *)arg1 ;
-(void)setTcpStatisticsReport:(AWDLibnetcoreTCPStatsReport *)arg1 ;
-(void)setTcpECNStatisticsReport:(AWDLibnetcoreTCPECNStatsReport *)arg1 ;
-(void)setTcpTFOStatisticsReport:(AWDLibnetcoreTCPTFOStatsReport *)arg1 ;
-(void)setNetworkdStatisticsReport:(AWDLibnetcoreNetworkdStatsReport *)arg1 ;
-(void)setTcpECNInterfaceReports:(NSMutableArray *)arg1 ;
-(void)setNwAPIUsageReport:(AWDNWAPIUsage *)arg1 ;
-(void)setMptcpStatisticsReport:(AWDLibnetcoreMPTCPStatsReport *)arg1 ;
-(void)addTcpECNInterfaceReport:(id)arg1 ;
-(unsigned long long)tcpECNInterfaceReportsCount;
-(void)clearTcpECNInterfaceReports;
-(id)tcpECNInterfaceReportAtIndex:(unsigned long long)arg1 ;
-(void)setReportReason:(unsigned)arg1 ;
-(void)setHasReportReason:(char)arg1 ;
-(char)hasReportReason;
-(char)hasMbufStatisticsReport;
-(char)hasTcpStatisticsReport;
-(char)hasTcpECNStatisticsReport;
-(char)hasTcpTFOStatisticsReport;
-(char)hasNetworkdStatisticsReport;
-(char)hasNwAPIUsageReport;
-(char)hasMptcpStatisticsReport;
-(unsigned)reportReason;
-(AWDLibnetcoreMbufStatsReport *)mbufStatisticsReport;
-(AWDLibnetcoreTCPStatsReport *)tcpStatisticsReport;
-(AWDLibnetcoreTCPECNStatsReport *)tcpECNStatisticsReport;
-(AWDLibnetcoreTCPTFOStatsReport *)tcpTFOStatisticsReport;
-(AWDLibnetcoreNetworkdStatsReport *)networkdStatisticsReport;
-(NSMutableArray *)tcpECNInterfaceReports;
-(AWDNWAPIUsage *)nwAPIUsageReport;
-(AWDLibnetcoreMPTCPStatsReport *)mptcpStatisticsReport;
@end
