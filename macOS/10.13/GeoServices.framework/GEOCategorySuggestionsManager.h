/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOCategorySuggestionsManager : NSObject {
    <GEOCategorySuggestionsManagerServerProxy> * _serverProxy;
}

+ (void)setUseLocalProxy:(BOOL)arg1;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_categorySuggestionsForSuggestionsResult:(id)arg1 dayOfWeek:(long long)arg2 hourOfDay:(long long)arg3;
- (id)_spotlightCategorySuggestionsForResponse:(id)arg1;
- (void)fetchSpotlightCategorySuggestions:(id)arg1;
- (id)init;
- (void)updateCachedSpotlightCategorySuggestions:(id)arg1;

@end
