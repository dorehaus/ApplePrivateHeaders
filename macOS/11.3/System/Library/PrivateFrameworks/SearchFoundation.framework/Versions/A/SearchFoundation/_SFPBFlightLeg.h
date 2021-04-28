/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/Versions/A/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBFlightLeg.h>
@class _SFPBDate, NSString, _SFPBAirport, NSData;


@protocol _SFPBFlightLeg <NSObject>
@property (assign,nonatomic) int status; 
@property (nonatomic,retain) _SFPBDate * departurePublishedTime; 
@property (nonatomic,retain) _SFPBDate * departureActualTime; 
@property (nonatomic,copy) NSString * departureTerminal; 
@property (nonatomic,copy) NSString * departureGate; 
@property (nonatomic,retain) _SFPBAirport * departureAirport; 
@property (nonatomic,retain) _SFPBDate * arrivalPublishedTime; 
@property (nonatomic,retain) _SFPBDate * arrivalActualTime; 
@property (nonatomic,copy) NSString * arrivalTerminal; 
@property (nonatomic,copy) NSString * arrivalGate; 
@property (nonatomic,retain) _SFPBAirport * arrivalAirport; 
@property (nonatomic,retain) _SFPBAirport * divertedAirport; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * baggageClaim; 
@property (nonatomic,retain) _SFPBDate * departureGateClosedTime; 
@property (nonatomic,retain) _SFPBDate * departureRunwayTime; 
@property (nonatomic,retain) _SFPBDate * arrivalRunwayTime; 
@property (nonatomic,retain) _SFPBDate * arrivalGateTime; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(void)setTitle:(id)arg1;
-(int)status;
-(NSString *)title;
-(void)setStatus:(int)arg1;
-(id)initWithJSON:(id)arg1;
-(NSData *)jsonData;
-(_SFPBAirport *)divertedAirport;
-(NSString *)arrivalGate;
-(NSString *)arrivalTerminal;
-(_SFPBDate *)arrivalActualTime;
-(_SFPBAirport *)arrivalAirport;
-(_SFPBDate *)arrivalPublishedTime;
-(NSString *)departureGate;
-(NSString *)departureTerminal;
-(_SFPBDate *)departureActualTime;
-(_SFPBAirport *)departureAirport;
-(_SFPBDate *)departurePublishedTime;
-(void)setDeparturePublishedTime:(id)arg1;
-(void)setDepartureActualTime:(id)arg1;
-(void)setDepartureTerminal:(id)arg1;
-(void)setDepartureGate:(id)arg1;
-(void)setDepartureGateClosedTime:(id)arg1;
-(void)setDepartureRunwayTime:(id)arg1;
-(void)setDepartureAirport:(id)arg1;
-(void)setArrivalPublishedTime:(id)arg1;
-(void)setArrivalActualTime:(id)arg1;
-(void)setArrivalTerminal:(id)arg1;
-(void)setArrivalGate:(id)arg1;
-(void)setBaggageClaim:(id)arg1;
-(void)setArrivalRunwayTime:(id)arg1;
-(void)setArrivalGateTime:(id)arg1;
-(void)setArrivalAirport:(id)arg1;
-(void)setDivertedAirport:(id)arg1;
-(NSString *)baggageClaim;
-(_SFPBDate *)departureGateClosedTime;
-(_SFPBDate *)departureRunwayTime;
-(_SFPBDate *)arrivalRunwayTime;
-(_SFPBDate *)arrivalGateTime;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _SFPBDate, NSString, _SFPBAirport, NSData;

@interface _SFPBFlightLeg : PBCodable <_SFPBFlightLeg, NSSecureCoding> {

	int _status;
	_SFPBDate* _departurePublishedTime;
	_SFPBDate* _departureActualTime;
	NSString* _departureTerminal;
	NSString* _departureGate;
	_SFPBAirport* _departureAirport;
	_SFPBDate* _arrivalPublishedTime;
	_SFPBDate* _arrivalActualTime;
	NSString* _arrivalTerminal;
	NSString* _arrivalGate;
	_SFPBAirport* _arrivalAirport;
	_SFPBAirport* _divertedAirport;
	NSString* _title;
	NSString* _baggageClaim;
	_SFPBDate* _departureGateClosedTime;
	_SFPBDate* _departureRunwayTime;
	_SFPBDate* _arrivalRunwayTime;
	_SFPBDate* _arrivalGateTime;

}

@property (assign,nonatomic) int status;                                       //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) _SFPBDate * departurePublishedTime;               //@synthesize departurePublishedTime=_departurePublishedTime - In the implementation block
@property (nonatomic,retain) _SFPBDate * departureActualTime;                  //@synthesize departureActualTime=_departureActualTime - In the implementation block
@property (nonatomic,copy) NSString * departureTerminal;                       //@synthesize departureTerminal=_departureTerminal - In the implementation block
@property (nonatomic,copy) NSString * departureGate;                           //@synthesize departureGate=_departureGate - In the implementation block
@property (nonatomic,retain) _SFPBAirport * departureAirport;                  //@synthesize departureAirport=_departureAirport - In the implementation block
@property (nonatomic,retain) _SFPBDate * arrivalPublishedTime;                 //@synthesize arrivalPublishedTime=_arrivalPublishedTime - In the implementation block
@property (nonatomic,retain) _SFPBDate * arrivalActualTime;                    //@synthesize arrivalActualTime=_arrivalActualTime - In the implementation block
@property (nonatomic,copy) NSString * arrivalTerminal;                         //@synthesize arrivalTerminal=_arrivalTerminal - In the implementation block
@property (nonatomic,copy) NSString * arrivalGate;                             //@synthesize arrivalGate=_arrivalGate - In the implementation block
@property (nonatomic,retain) _SFPBAirport * arrivalAirport;                    //@synthesize arrivalAirport=_arrivalAirport - In the implementation block
@property (nonatomic,retain) _SFPBAirport * divertedAirport;                   //@synthesize divertedAirport=_divertedAirport - In the implementation block
@property (nonatomic,copy) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * baggageClaim;                            //@synthesize baggageClaim=_baggageClaim - In the implementation block
@property (nonatomic,retain) _SFPBDate * departureGateClosedTime;              //@synthesize departureGateClosedTime=_departureGateClosedTime - In the implementation block
@property (nonatomic,retain) _SFPBDate * departureRunwayTime;                  //@synthesize departureRunwayTime=_departureRunwayTime - In the implementation block
@property (nonatomic,retain) _SFPBDate * arrivalRunwayTime;                    //@synthesize arrivalRunwayTime=_arrivalRunwayTime - In the implementation block
@property (nonatomic,retain) _SFPBDate * arrivalGateTime;                      //@synthesize arrivalGateTime=_arrivalGateTime - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(int)status;
-(id)dictionaryRepresentation;
-(NSString *)title;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(_SFPBAirport *)divertedAirport;
-(NSString *)arrivalGate;
-(NSString *)arrivalTerminal;
-(_SFPBDate *)arrivalActualTime;
-(_SFPBAirport *)arrivalAirport;
-(_SFPBDate *)arrivalPublishedTime;
-(NSString *)departureGate;
-(NSString *)departureTerminal;
-(_SFPBDate *)departureActualTime;
-(_SFPBAirport *)departureAirport;
-(_SFPBDate *)departurePublishedTime;
-(void)setDeparturePublishedTime:(_SFPBDate *)arg1 ;
-(void)setDepartureActualTime:(_SFPBDate *)arg1 ;
-(void)setDepartureTerminal:(NSString *)arg1 ;
-(void)setDepartureGate:(NSString *)arg1 ;
-(void)setDepartureGateClosedTime:(_SFPBDate *)arg1 ;
-(void)setDepartureRunwayTime:(_SFPBDate *)arg1 ;
-(void)setDepartureAirport:(_SFPBAirport *)arg1 ;
-(void)setArrivalPublishedTime:(_SFPBDate *)arg1 ;
-(void)setArrivalActualTime:(_SFPBDate *)arg1 ;
-(void)setArrivalTerminal:(NSString *)arg1 ;
-(void)setArrivalGate:(NSString *)arg1 ;
-(void)setBaggageClaim:(NSString *)arg1 ;
-(void)setArrivalRunwayTime:(_SFPBDate *)arg1 ;
-(void)setArrivalGateTime:(_SFPBDate *)arg1 ;
-(void)setArrivalAirport:(_SFPBAirport *)arg1 ;
-(void)setDivertedAirport:(_SFPBAirport *)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(NSString *)baggageClaim;
-(_SFPBDate *)departureGateClosedTime;
-(_SFPBDate *)departureRunwayTime;
-(_SFPBDate *)arrivalRunwayTime;
-(_SFPBDate *)arrivalGateTime;
@end

