/**
 * @file Test.cpp
 * @author Tom Koltunov
 * @brief Test cases for 5th assignment in Software_Systems_B course
 * @date 2022-05
 */

#include "doctest.h"
#include "OrgChart.hpp"
#include <iostream>
#include <vector>
#include <string>
using namespace doctest;
using namespace std;
using namespace ariel;

TEST_CASE("Good input")
{
      OrgChart IDF;
      IDF.add_root("Israeli General Staff") // המטה הכללי
            .add_sub("Israeli General Staff", "Deputy Chief of Staff") // סגן הרמטכ"ל
            .add_sub("Israeli General Staff", "Wings") // אגפים
            .add_sub("Israeli General Staff", "Arms") // זרועות
            .add_sub("Israeli General Staff", "Commands") // Commands = פיקודים
            .add_sub("Israeli General Staff", "Military courts") // בתי הדין הצבאיים
            .add_sub("Israeli General Staff", "Military Rabbinate") // הרבנות הצבאית
            .add_sub("Israeli General Staff", "Military colleges") // המכללות הצבאיות

                  .add_sub("Wings", "Technological and Logistics Directorate") // אגף הטכנולוגיה והלוגיסטיקה
                  .add_sub("Wings", "Personnel Directorate") // אגף כוח האדם
                  .add_sub("Wings", "Operations Directorate") // אגף המבצעים
                  .add_sub("Wings", "Intelligence Directorate") // אגף המודיעין
                  .add_sub("Wings", "Computer Service Directorate") // אגף התקשוב וההגנה בסייבר
                  .add_sub("Wings", "Planning Directorate") // אגף התכנון

                        .add_sub("Technological and Logistics Directorate", "Technology and Maintenance Corps") // חיל הטכנולוגיה והאחזקה
                        .add_sub("Technological and Logistics Directorate", "Medical Corps") // חיל הרפואה 
                        .add_sub("Technological and Logistics Directorate", "Logistics Corps") // חיל הלוגיסטיקה

                        .add_sub("Personnel Directorate", "Adjutant Corps") // חיל משאבי האנוש
                        .add_sub("Personnel Directorate", "Military Police Corps") // חיל המשטרה הצבאית
                        .add_sub("Personnel Directorate", "Education and Youth Corps") // חיל החינוך והנוער
                        .add_sub("Personnel Directorate", "General Corps") // החיל הכללי

                        .add_sub("Operations Directorate", "Spokesperson's Unit") // דובר צה"ל

                        .add_sub("Intelligence Directorate", "Intelligence Corps") // חיל המודיעין

                        .add_sub("Computer Service Directorate", "C4I Corps") // חיל הקשר והתקשוב

                  .add_sub("Arms", "Ground Forces") // זרוע היבשה
                  .add_sub("Arms", "Air Force") // זרוע האוויר והחלל
                  .add_sub("Arms", "Navy") // זרוע הים

                        .add_sub("Ground Forces", "Infantry Corps") // חיל הרגלים
                        .add_sub("Ground Forces", "Armored Corps") // חיל החימוש
                        .add_sub("Ground Forces", "Artillery Corps") // חיל התותחנים
                        .add_sub("Ground Forces", "Combat Engineering Corps") // חיל ההנדסה הקרבית
                        .add_sub("Ground Forces", "Border Protection Corps") // חיל הגנת הגבולות

                  .add_sub("Commands", "Northern Command") // פיקוד הצפון
                  .add_sub("Commands", "Central Command") // פיקוד המרכז
                  .add_sub("Commands", "Southern Command") // פיקוד הדרום
                  .add_sub("Commands", "Home Front Command") // פיקוד העורף
                  .add_sub("Commands", "Depth Corps") // מפקדת העומק

                        .add_sub("Northern Command", "Northern Brigade"); // הגיס הצפוני

      vector<string> organization;
      for (auto it = IDF.begin_level_order(); it != IDF.end_level_order(); ++it)
      {
            organization.push_back(*it);
      }
      CHECK_EQ(organization.at(0), "Israeli General Staff");
      CHECK_EQ(organization.at(1), "Deputy Chief of Staff");
      CHECK_EQ(organization.at(2), "Wings");
      CHECK_EQ(organization.at(3), "Arms");
      CHECK_EQ(organization.at(4), "Commands");
      CHECK_EQ(organization.at(5), "Military courts");
      CHECK_EQ(organization.at(6), "Military Rabbinate");
      CHECK_EQ(organization.at(7), "Military colleges");
      CHECK_EQ(organization.at(8), "Technological and Logistics Directorate");
      CHECK_EQ(organization.at(9), "Personnel Directorate");
      CHECK_EQ(organization.at(10), "Operations Directorate");
      CHECK_EQ(organization.at(11), "Intelligence Directorate");
      CHECK_EQ(organization.at(12), "Computer Service Directorate");
      CHECK_EQ(organization.at(13), "Planning Directorate");
      CHECK_EQ(organization.at(14), "Ground Forces");
      CHECK_EQ(organization.at(15), "Air Force");
      CHECK_EQ(organization.at(16), "Navy");
      CHECK_EQ(organization.at(17), "Northern Command");
      CHECK_EQ(organization.at(18), "Central Command");
      CHECK_EQ(organization.at(19), "Southern Command");
      CHECK_EQ(organization.at(20), "Home Front Command");
      CHECK_EQ(organization.at(21), "Depth Corps");
      CHECK_EQ(organization.at(22), "Technology and Maintenance Corps");
      CHECK_EQ(organization.at(23), "Medical Corps");
      CHECK_EQ(organization.at(24), "Logistics Corps");
      CHECK_EQ(organization.at(25), "Adjutant Corps");
      CHECK_EQ(organization.at(26), "Military Police Corps");
      CHECK_EQ(organization.at(27), "Education and Youth Corps");
      CHECK_EQ(organization.at(28), "General Corps");
      CHECK_EQ(organization.at(29), "Spokesperson's Unit");
      CHECK_EQ(organization.at(30), "Intelligence Corps");
      CHECK_EQ(organization.at(31), "C4I Corps");
      CHECK_EQ(organization.at(32), "Infantry Corps");
      CHECK_EQ(organization.at(33), "Armored Corps");
      CHECK_EQ(organization.at(34), "Artillery Corps");
      CHECK_EQ(organization.at(35), "Combat Engineering Corps");
      CHECK_EQ(organization.at(36), "Border Protection Corps");
      CHECK_EQ(organization.at(37), "Northern Brigade");
}