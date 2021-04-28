/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SecurityFoundation/SecurityFoundation-Structs.h>
@interface CAKeyUsageExtension : NSObject {

	int _caKeyUsageExtensionIsEnabled;
	int _caKeyUsageExtensionIsCritical;
	int _caKeyUsageExtensionSignature;
	int _caKeyUsageExtensionNonRepudiation;
	int _caKeyUsageExtensionKeyEncipherment;
	int _caKeyUsageExtensionDataEncipherment;
	int _caKeyUsageExtensionKeyAgreement;
	int _caKeyUsageExtensionCertSigning;
	int _caKeyUsageExtensionCRLSigning;
	int _caKeyUsageExtensionEncipherOnly;
	int _caKeyUsageExtensionDecipherOnly;
	int _caCertAuthorityKeyUsageExtensionIsEnabled;
	int _caCertAuthorityKeyUsageExtensionIsCritical;
	int _caCertAuthorityKeyUsageExtensionSignature;
	int _caCertAuthorityKeyUsageExtensionNonRepudiation;
	int _caCertAuthorityKeyUsageExtensionKeyEncipherment;
	int _caCertAuthorityKeyUsageExtensionDataEncipherment;
	int _caCertAuthorityKeyUsageExtensionKeyAgreement;
	int _caCertAuthorityKeyUsageExtensionCertSigning;
	int _caCertAuthorityKeyUsageExtensionCRLSigning;
	int _caCertAuthorityKeyUsageExtensionEncipherOnly;
	int _caCertAuthorityKeyUsageExtensionDecipherOnly;
	int _caUserKeyUsageExtensionIsEnabled;
	int _caUserKeyUsageExtensionIsCritical;
	int _caUserKeyUsageExtensionSignature;
	int _caUserKeyUsageExtensionNonRepudiation;
	int _caUserKeyUsageExtensionKeyEncipherment;
	int _caUserKeyUsageExtensionDataEncipherment;
	int _caUserKeyUsageExtensionKeyAgreement;
	int _caUserKeyUsageExtensionCertSigning;
	int _caUserKeyUsageExtensionCRLSigning;
	int _caUserKeyUsageExtensionEncipherOnly;
	int _caUserKeyUsageExtensionDecipherOnly;
	char _caDoneCAKeyUsageExts;

}
-(void)_fillInValuesInExtension:(_CE_DataAndType*)arg1 isCACertBeingCreated:(char)arg2 extensionIsPresent:(char*)arg3 ;
-(int)_signatureUsage;
-(int)_nonRepudiationUsage;
-(int)_keyEnciphermentUsage;
-(int)_dataEnciphermentUsage;
-(int)_keyAgreementUsage;
-(int)_certSigningUsage;
-(int)_crlSigningUsage;
-(int)_encipherOnlyUsage;
-(int)_decipherOnlyUsage;
-(int)_isEnabled;
-(char)_validate;
-(void)_setIsEnabled:(id)arg1 ;
-(int)_isCritical;
-(void)_setToSSLServer;
-(void)_setToSSLClient;
-(void)_setToSMIME;
-(void)_setToVPNClient;
-(void)_setToVPNServer;
-(void)_setToCodeSigning;
-(void)_setToDefaults;
-(void)_setCertAuthorityIsEnabled:(char)arg1 ;
-(void)_setCertAuthorityCertSigning:(char)arg1 ;
-(void)_setCertAuthoritySignature:(char)arg1 ;
-(void)_setUserSignature:(char)arg1 ;
-(char)_doneCAKeyUsageExt;
-(void)_saveUserKeyUsageExtPanelValues;
-(void)_saveCAKeyUsageExtPanelValues;
-(void)_setDoneCAKeyUsageExt:(char)arg1 ;
-(void)_updateKeyUsageExtPanelToUserValues;
-(void)_updateKeyUsageExtPanelToCAValues;
-(void)_setCertSigningUsage:(id)arg1 ;
-(void)_setKeyEnciphermentUsage:(id)arg1 ;
-(void)_setEnabledCriticalDigitalSignature;
-(void)_setDataEnciphermentUsage:(id)arg1 ;
-(void)_setSignatureUsage:(id)arg1 ;
-(void)_setNonRepudiationUsage:(id)arg1 ;
-(void)_setKeyAgreementUsage:(id)arg1 ;
-(void)_setEncipherOnlyUsage:(id)arg1 ;
-(void)_setDecipherOnlyUsage:(id)arg1 ;
-(void)_setIsCritical:(id)arg1 ;
-(void)_setCRLSigningUsage:(id)arg1 ;
@end

