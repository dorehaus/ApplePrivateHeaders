/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RTHelperServiceProtocol
@required
-(void)fetchMapItemFromHandle:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3;
-(void)fetchMapItemsFromLocation:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3;
-(void)fetchMapItemsFromLocations:(id)arg1 accessPoints:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 options:(id)arg5 handler:(/*^block*/id)arg6;
-(void)fetchMapItemsFromAddressDictionary:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3;
-(void)createMapItemWithIdentifier:(id)arg1 geoMapItemStorage:(id)arg2 source:(unsigned long long)arg3 creationDate:(id)arg4 handler:(/*^block*/id)arg5;
-(void)fetchMapItemsFromNaturalLanguageQuery:(id)arg1 location:(id)arg2 options:(id)arg3 handler:(/*^block*/id)arg4;
-(void)fetchMapItemsFromAddressString:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3;
-(void)fetchPostalAddressForMapItem:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3;
-(void)fetchCountryAndSubdivisionCodesFromLocation:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3;

@end

