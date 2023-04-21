#!/bin/sh

DateSuffix() {       
    case `date +%d` in    
        1|21|31) echo "st";;
        2|22)    echo "nd";;    
        3|23)    echo "rd";;
        *)       echo "th";;
    esac                   
}                       
newDate=`date "+    updated on: %d\`DaySuffix\` %B %Y"`
sed -i "1s/ .* /$newDate/" README.md