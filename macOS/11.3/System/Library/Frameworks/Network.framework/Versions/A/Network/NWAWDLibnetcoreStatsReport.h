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

@class NWAWDLibnetcoreMbufStatsReport, NWAWDLibnetcoreMPTCPStatsReport, NWAWDLibnetcoreNetworkdStatsReport, NWAWDNWAPIUsage, NSMutableArray, NWAWDLibnetcoreTCPECNStatsReport, NWAWDLibnetcoreTCPStatsReport, NWAWDLibnetcoreTCPTFOStatsReport;

@interface NWAWDLibnetcoreStatsReport : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NWAWDLibnetcoreMbufStatsReport* _mbufStatisticsReport;
	NWAWDLibnetcoreMPTCPStatsReport* _mptcpStatisticsReport;
	NWAWDLibnetcoreNetworkdStatsReport* _networkdStatisticsReport;
	NWAWDNWAPIUsage* _nwAPIUsageReport;
	unsigned _reportReason;
	NSMutableArray* _tcpECNInterfaceReports;
	NWAWDLibnetcoreTCPECNStatsReport* _tcpECNStatisticsReport;
	NWAWDLibnetcoreTCPStatsReport* _tcpStatisticsReport;
	NWAWDLibnetcoreTCPTFOStatsReport* _tcpTFOStatisticsReport;
	SCD_Struct_NW10 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasReportReason; 
@property (assign,nonatomic) unsigned reportReason;                                                      //@synthesize reportReason=_reportReason - In the implementation block
@property (nonatomic,readonly) char hasMbufStatisticsReport; 
@property (nonatomic,retain) NWAWDLibnetcoreMbufStatsReport * mbufStatisticsReport;                      //@synthesize mbufStatisticsReport=_mbufStatisticsReport - In the implementation block
@property (nonatomic,readonly) char hasTcpStatisticsReport; 
@property (nonatomic,retain) NWAWDLibnetcoreTCPStatsReport * tcpStatisticsReport;                        //@synthesize tcpStatisticsReport=_tcpStatisticsReport - In the implementation block
@property (nonatomic,readonly) char hasTcpECNStatisticsReport; 
@property (nonatomic,retain) NWAWDLibnetcoreTCPECNStatsReport * tcpECNStatisticsReport;                  //@synthesize tcpECNStatisticsReport=_tcpECNStatisticsReport - In the implementation block
@property (nonatomic,readonly) char hasTcpTFOStatisticsReport; 
@property (nonatomic,retain) NWAWDLibnetcoreTCPTFOStatsReport * tcpTFOStatisticsReport;                  //@synthesize tcpTFOStatisticsReport=_tcpTFOStatisticsReport - In the implementation block
@property (nonatomic,readonly) char hasNetworkdStatisticsReport; 
@property (nonatomic,retain) NWAWDLibnetcoreNetworkdStatsReport * networkdStatisticsReport;              //@synthesize networkdStatisticsReport=_networkdStatisticsReport - In the implementation block
@property (nonatomic,retain) NSMutableArray * tcpECNInterfaceReports;                                    //@synthesize tcpECNInterfaceReports=_tcpECNInterfaceReports - In the implementation block
@property (nonatomic,readonly) char hasNwAPIUsageReport; 
@property (nonatomic,retain) NWAWDNWAPIUsage * nwAPIUsageReport;                                         //@synthesize nwAPIUsageReport=_nwAPIUsageReport - In the implementation block
@property (nonatomic,readonly) char hasMptcpStatisticsReport; 
@property (nonatomic,retain) NWAWDLibnetcoreMPTCPStatsReport * mptcpStatisticsReport;                    //@synthesize mptcpStatisticsReport=_mptcpStatisticsReport - In the implementation block
+(Class)tcpECNInterfaceReportType;
-(id)copyWithZone:(NSZone*)arg1 ;
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
-(void)setMbufStatisticsReport:(NWAWDLibnetcoreMbufStatsReport *)arg1 ;
-(void)setTcpStatisticsReport:(NWAWDLibnetcoreTCPStatsReport *)arg1 ;
-(void)setTcpECNStatisticsReport:(NWAWDLibnetcoreTCPECNStatsReport *)arg1 ;
-(void)setTcpTFOStatisticsReport:(NWAWDLibnetcoreTCPTFOStatsReport *)arg1 ;
-(void)setNetworkdStatisticsReport:(NWAWDLibnetcoreNetworkdStatsReport *)arg1 ;
-(void)setTcpECNInterfaceReports:(NSMutableArray *)arg1 ;
-(void)setNwAPIUsageReport:(NWAWDNWAPIUsage *)arg1 ;
-(void)setMptcpStatisticsReport:(NWAWDLibnetcoreMPTCPStatsReport *)arg1 ;
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
-(NWAWDLibnetcoreMbufStatsReport *)mbufStatisticsReport;
-(NWAWDLibnetcoreTCPStatsReport *)tcpStatisticsReport;
-(NWAWDLibnetcoreTCPECNStatsReport *)tcpECNStatisticsReport;
-(NWAWDLibnetcoreTCPTFOStatsReport *)tcpTFOStatisticsReport;
-(NWAWDLibnetcoreNetworkdStatsReport *)networkdStatisticsReport;
-(NSMutableArray *)tcpECNInterfaceReports;
-(NWAWDNWAPIUsage *)nwAPIUsageReport;
-(NWAWDLibnetcoreMPTCPStatsReport *)mptcpStatisticsReport;
@end
