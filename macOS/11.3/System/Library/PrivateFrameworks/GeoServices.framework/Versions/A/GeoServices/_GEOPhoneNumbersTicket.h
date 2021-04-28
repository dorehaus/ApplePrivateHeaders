/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOAbstractMapServiceTicket.h>

@class NSArray;

@interface _GEOPhoneNumbersTicket : GEOAbstractMapServiceTicket {

	NSArray* _phoneNumbers;
	char _allowCellularDataForLookup;

}
-(id)description;
-(SCD_Struct_GE87)dataRequestKind;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(/*^block*/id)arg4 ;
-(id)initWithPhoneNumbers:(id)arg1 allowCellularDataForLookup:(char)arg2 traits:(id)arg3 ;
@end

