/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/Versions/A/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MSPSenderStrategy.h>

@interface MSPSenderMinimalStrategy : MSPSenderStrategy {

	char _needToSendInit;

}
-(void)addParticipants:(id)arg1 ;
-(void)etaUpdated:(id)arg1 ;
-(void)destinationUpdated:(id)arg1 ;
-(char)_validDestinationState:(id)arg1 ;
-(void)_sendDestinationIfNeeded;
-(char)_needToSendEtaRefreshFor:(id)arg1 state:(id)arg2 ;
@end

